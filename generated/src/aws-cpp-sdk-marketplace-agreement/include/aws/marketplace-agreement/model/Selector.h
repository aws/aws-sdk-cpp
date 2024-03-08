/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Differentiates between the mutually exclusive rate cards in the same pricing
   * term to be selected by the buyer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/Selector">AWS
   * API Reference</a></p>
   */
  class Selector
  {
  public:
    AWS_AGREEMENTSERVICE_API Selector();
    AWS_AGREEMENTSERVICE_API Selector(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Selector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Category of selector.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Category of selector.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Category of selector.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Category of selector.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Category of selector.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Category of selector.</p>
     */
    inline Selector& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Category of selector.</p>
     */
    inline Selector& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Category of selector.</p>
     */
    inline Selector& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline Selector& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline Selector& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Contract duration. This field supports the ISO 8601 format. </p>
     */
    inline Selector& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
