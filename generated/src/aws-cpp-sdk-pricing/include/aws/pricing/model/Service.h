/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pricing
{
namespace Model
{

  /**
   * <p>The metadata for a service, such as the service code and available attribute
   * names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/Service">AWS API
   * Reference</a></p>
   */
  class Service
  {
  public:
    AWS_PRICING_API Service();
    AWS_PRICING_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the Amazon Web Services service.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline Service& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline Service& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline Service& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes that are available for this service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }
    inline Service& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}
    inline Service& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}
    inline Service& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    inline Service& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }
    inline Service& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
