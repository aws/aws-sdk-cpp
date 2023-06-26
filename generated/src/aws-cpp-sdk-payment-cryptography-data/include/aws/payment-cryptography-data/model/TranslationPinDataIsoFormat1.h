/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameters that are required for ISO9564 PIN format 1
   * tranlation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/TranslationPinDataIsoFormat1">AWS
   * API Reference</a></p>
   */
  class TranslationPinDataIsoFormat1
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationPinDataIsoFormat1();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationPinDataIsoFormat1(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationPinDataIsoFormat1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
