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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationIsoFormats() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationIsoFormats(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslationIsoFormats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters that are required for ISO9564 PIN format 0 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat034& GetIsoFormat0() const { return m_isoFormat0; }
    inline bool IsoFormat0HasBeenSet() const { return m_isoFormat0HasBeenSet; }
    template<typename IsoFormat0T = TranslationPinDataIsoFormat034>
    void SetIsoFormat0(IsoFormat0T&& value) { m_isoFormat0HasBeenSet = true; m_isoFormat0 = std::forward<IsoFormat0T>(value); }
    template<typename IsoFormat0T = TranslationPinDataIsoFormat034>
    TranslationIsoFormats& WithIsoFormat0(IsoFormat0T&& value) { SetIsoFormat0(std::forward<IsoFormat0T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for ISO9564 PIN format 1 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat1& GetIsoFormat1() const { return m_isoFormat1; }
    inline bool IsoFormat1HasBeenSet() const { return m_isoFormat1HasBeenSet; }
    template<typename IsoFormat1T = TranslationPinDataIsoFormat1>
    void SetIsoFormat1(IsoFormat1T&& value) { m_isoFormat1HasBeenSet = true; m_isoFormat1 = std::forward<IsoFormat1T>(value); }
    template<typename IsoFormat1T = TranslationPinDataIsoFormat1>
    TranslationIsoFormats& WithIsoFormat1(IsoFormat1T&& value) { SetIsoFormat1(std::forward<IsoFormat1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for ISO9564 PIN format 3 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat034& GetIsoFormat3() const { return m_isoFormat3; }
    inline bool IsoFormat3HasBeenSet() const { return m_isoFormat3HasBeenSet; }
    template<typename IsoFormat3T = TranslationPinDataIsoFormat034>
    void SetIsoFormat3(IsoFormat3T&& value) { m_isoFormat3HasBeenSet = true; m_isoFormat3 = std::forward<IsoFormat3T>(value); }
    template<typename IsoFormat3T = TranslationPinDataIsoFormat034>
    TranslationIsoFormats& WithIsoFormat3(IsoFormat3T&& value) { SetIsoFormat3(std::forward<IsoFormat3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for ISO9564 PIN format 4 tranlation.</p>
     */
    inline const TranslationPinDataIsoFormat034& GetIsoFormat4() const { return m_isoFormat4; }
    inline bool IsoFormat4HasBeenSet() const { return m_isoFormat4HasBeenSet; }
    template<typename IsoFormat4T = TranslationPinDataIsoFormat034>
    void SetIsoFormat4(IsoFormat4T&& value) { m_isoFormat4HasBeenSet = true; m_isoFormat4 = std::forward<IsoFormat4T>(value); }
    template<typename IsoFormat4T = TranslationPinDataIsoFormat034>
    TranslationIsoFormats& WithIsoFormat4(IsoFormat4T&& value) { SetIsoFormat4(std::forward<IsoFormat4T>(value)); return *this;}
    ///@}
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
