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
    AWS_SIGNER_API SignatureValidityPeriod();
    AWS_SIGNER_API SignatureValidityPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SignatureValidityPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The numerical value of the time unit for signature validity.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The numerical value of the time unit for signature validity.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The numerical value of the time unit for signature validity.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The numerical value of the time unit for signature validity.</p>
     */
    inline SignatureValidityPeriod& WithValue(int value) { SetValue(value); return *this;}


    /**
     * <p>The time unit for signature validity.</p>
     */
    inline const ValidityType& GetType() const{ return m_type; }

    /**
     * <p>The time unit for signature validity.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The time unit for signature validity.</p>
     */
    inline void SetType(const ValidityType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The time unit for signature validity.</p>
     */
    inline void SetType(ValidityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The time unit for signature validity.</p>
     */
    inline SignatureValidityPeriod& WithType(const ValidityType& value) { SetType(value); return *this;}

    /**
     * <p>The time unit for signature validity.</p>
     */
    inline SignatureValidityPeriod& WithType(ValidityType&& value) { SetType(std::move(value)); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet = false;

    ValidityType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
