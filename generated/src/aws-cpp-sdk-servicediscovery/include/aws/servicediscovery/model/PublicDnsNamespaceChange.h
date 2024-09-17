/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/PublicDnsNamespacePropertiesChange.h>
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
   * <p>Updated properties for the public DNS namespace.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PublicDnsNamespaceChange">AWS
   * API Reference</a></p>
   */
  class PublicDnsNamespaceChange
  {
  public:
    AWS_SERVICEDISCOVERY_API PublicDnsNamespaceChange();
    AWS_SERVICEDISCOVERY_API PublicDnsNamespaceChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PublicDnsNamespaceChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An updated description for the public DNS namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PublicDnsNamespaceChange& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PublicDnsNamespaceChange& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PublicDnsNamespaceChange& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties to be updated in the public DNS namespace.</p>
     */
    inline const PublicDnsNamespacePropertiesChange& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const PublicDnsNamespacePropertiesChange& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(PublicDnsNamespacePropertiesChange&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline PublicDnsNamespaceChange& WithProperties(const PublicDnsNamespacePropertiesChange& value) { SetProperties(value); return *this;}
    inline PublicDnsNamespaceChange& WithProperties(PublicDnsNamespacePropertiesChange&& value) { SetProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PublicDnsNamespacePropertiesChange m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
