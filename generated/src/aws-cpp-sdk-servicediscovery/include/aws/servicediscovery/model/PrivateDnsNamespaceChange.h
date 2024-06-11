/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/PrivateDnsNamespacePropertiesChange.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>Updated properties for the private DNS namespace.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PrivateDnsNamespaceChange">AWS
   * API Reference</a></p>
   */
  class PrivateDnsNamespaceChange
  {
  public:
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespaceChange();
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespaceChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespaceChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An updated description for the private DNS namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PrivateDnsNamespaceChange& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PrivateDnsNamespaceChange& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PrivateDnsNamespaceChange& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties to be updated in the private DNS namespace.</p>
     */
    inline const PrivateDnsNamespacePropertiesChange& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const PrivateDnsNamespacePropertiesChange& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(PrivateDnsNamespacePropertiesChange&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline PrivateDnsNamespaceChange& WithProperties(const PrivateDnsNamespacePropertiesChange& value) { SetProperties(value); return *this;}
    inline PrivateDnsNamespaceChange& WithProperties(PrivateDnsNamespacePropertiesChange&& value) { SetProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PrivateDnsNamespacePropertiesChange m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
