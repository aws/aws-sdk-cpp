/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/ValidityType.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>The validity period for a signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SignatureValidityPeriod">AWS
   * API Reference</a></p>
   */
  class SignatureValidityPeriod
  {
  public:
    AWS_SIGNER_API SignatureValidityPeriod() = default;
    AWS_SIGNER_API SignatureValidityPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SignatureValidityPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The numerical value of the time unit for signature validity.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline SignatureValidityPeriod& WithValue(int value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time unit for signature validity.</p>
     */
    inline ValidityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ValidityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SignatureValidityPeriod& WithType(ValidityType value) { SetType(value); return *this;}
    ///@}
  private:

    int m_value{0};
    bool m_valueHasBeenSet = false;

    ValidityType m_type{ValidityType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
