/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/TranslationPinDataIsoFormat034.h>
#include <aws/payment-cryptography-data/model/TranslationPinDataIsoFormat1.h>
#include <utility>

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
   * <p>Parameters that are required for translation between ISO9564 PIN block
   * formats 0,1,3,4.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/TranslationIsoFormats">AWS
   * API Reference</a></p>
   */
  class TranslationIsoFormats
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationIsoFormats();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationIsoFormats(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationIsoFormats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameters that are required for ISO9564 PIN format 0 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat034& GetIsoFormat0() const{ return m_isoFormat0; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 0 tranlation.</p>
     */
    inline bool IsoFormat0HasBeenSet() const { return m_isoFormat0HasBeenSet; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 0 tranlation.</p>
     */
    inline void SetIsoFormat0(const TranslationPinDataIsoFormat034& value) { m_isoFormat0HasBeenSet = true; m_isoFormat0 = value; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 0 tranlation.</p>
     */
    inline void SetIsoFormat0(TranslationPinDataIsoFormat034&& value) { m_isoFormat0HasBeenSet = true; m_isoFormat0 = std::move(value); }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 0 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat0(const TranslationPinDataIsoFormat034& value) { SetIsoFormat0(value); return *this;}

    /**
     * <p>Parameters that are required for ISO9564 PIN format 0 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat0(TranslationPinDataIsoFormat034&& value) { SetIsoFormat0(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for ISO9564 PIN format 1 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat1& GetIsoFormat1() const{ return m_isoFormat1; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 1 tranlation.</p>
     */
    inline bool IsoFormat1HasBeenSet() const { return m_isoFormat1HasBeenSet; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 1 tranlation.</p>
     */
    inline void SetIsoFormat1(const TranslationPinDataIsoFormat1& value) { m_isoFormat1HasBeenSet = true; m_isoFormat1 = value; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 1 tranlation.</p>
     */
    inline void SetIsoFormat1(TranslationPinDataIsoFormat1&& value) { m_isoFormat1HasBeenSet = true; m_isoFormat1 = std::move(value); }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 1 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat1(const TranslationPinDataIsoFormat1& value) { SetIsoFormat1(value); return *this;}

    /**
     * <p>Parameters that are required for ISO9564 PIN format 1 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat1(TranslationPinDataIsoFormat1&& value) { SetIsoFormat1(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for ISO9564 PIN format 3 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat034& GetIsoFormat3() const{ return m_isoFormat3; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 3 tranlation.</p>
     */
    inline bool IsoFormat3HasBeenSet() const { return m_isoFormat3HasBeenSet; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 3 tranlation.</p>
     */
    inline void SetIsoFormat3(const TranslationPinDataIsoFormat034& value) { m_isoFormat3HasBeenSet = true; m_isoFormat3 = value; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 3 tranlation.</p>
     */
    inline void SetIsoFormat3(TranslationPinDataIsoFormat034&& value) { m_isoFormat3HasBeenSet = true; m_isoFormat3 = std::move(value); }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 3 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat3(const TranslationPinDataIsoFormat034& value) { SetIsoFormat3(value); return *this;}

    /**
     * <p>Parameters that are required for ISO9564 PIN format 3 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat3(TranslationPinDataIsoFormat034&& value) { SetIsoFormat3(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for ISO9564 PIN format 4 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat034& GetIsoFormat4() const{ return m_isoFormat4; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 4 tranlation.</p>
     */
    inline bool IsoFormat4HasBeenSet() const { return m_isoFormat4HasBeenSet; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 4 tranlation.</p>
     */
    inline void SetIsoFormat4(const TranslationPinDataIsoFormat034& value) { m_isoFormat4HasBeenSet = true; m_isoFormat4 = value; }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 4 tranlation.</p>
     */
    inline void SetIsoFormat4(TranslationPinDataIsoFormat034&& value) { m_isoFormat4HasBeenSet = true; m_isoFormat4 = std::move(value); }

    /**
     * <p>Parameters that are required for ISO9564 PIN format 4 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat4(const TranslationPinDataIsoFormat034& value) { SetIsoFormat4(value); return *this;}

    /**
     * <p>Parameters that are required for ISO9564 PIN format 4 tranlation.</p>
     */
    inline TranslationIsoFormats& WithIsoFormat4(TranslationPinDataIsoFormat034&& value) { SetIsoFormat4(std::move(value)); return *this;}

  private:

    TranslationPinDataIsoFormat034 m_isoFormat0;
    bool m_isoFormat0HasBeenSet = false;

    TranslationPinDataIsoFormat1 m_isoFormat1;
    bool m_isoFormat1HasBeenSet = false;

    TranslationPinDataIsoFormat034 m_isoFormat3;
    bool m_isoFormat3HasBeenSet = false;

    TranslationPinDataIsoFormat034 m_isoFormat4;
    bool m_isoFormat4HasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
