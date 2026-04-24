/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
enum class CurrencyCode {
  NOT_SET,
  AED,
  AMD,
  ARS,
  AUD,
  AWG,
  AZN,
  BBD,
  BDT,
  BGN,
  BMD,
  BND,
  BOB,
  BRL,
  BSD,
  BYR,
  BZD,
  CAD,
  CHF,
  CLP,
  CNY,
  COP,
  CRC,
  CZK,
  DKK,
  DOP,
  EEK,
  EGP,
  EUR,
  GBP,
  GEL,
  GHS,
  GTQ,
  GYD,
  HKD,
  HNL,
  HRK,
  HTG,
  HUF,
  IDR,
  ILS,
  INR,
  ISK,
  JMD,
  JPY,
  KES,
  KHR,
  KRW,
  KYD,
  KZT,
  LBP,
  LKR,
  LTL,
  LVL,
  MAD,
  MNT,
  MOP,
  MUR,
  MVR,
  MXN,
  MYR,
  NAD,
  NGN,
  NIO,
  NOK,
  NZD,
  PAB,
  PEN,
  PHP,
  PKR,
  PLN,
  PYG,
  QAR,
  RON,
  RUB,
  SAR,
  SEK,
  SGD,
  SIT,
  SKK,
  THB,
  TND,
  TRY,
  TTD,
  TWD,
  TZS,
  UAH,
  USD,
  UYU,
  UZS,
  VND,
  XAF,
  XCD,
  XOF,
  XPF,
  ZAR
};

namespace CurrencyCodeMapper {
AWS_PARTNERCENTRALBENEFITS_API CurrencyCode GetCurrencyCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForCurrencyCode(CurrencyCode value);
}  // namespace CurrencyCodeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
