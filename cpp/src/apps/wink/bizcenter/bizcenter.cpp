﻿#include "stable.h"
#include "bizcenter.h"
#include "bizitemmodel.h"

BizCenter::BizCenter(QObject* parent /*= nullptr*/)
    : QObject(parent)
    , m_model(new BizItemModel(this))
{

}

BizCenter::~BizCenter()
{
}

void BizCenter::setActiveId(const QString& id)
{
    Q_UNUSED(id);
}

BizItemModel* BizCenter::model() const
{
    return m_model;
}
