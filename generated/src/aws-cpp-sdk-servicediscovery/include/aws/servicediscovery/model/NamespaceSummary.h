/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/NamespaceType.h>
#include <aws/servicediscovery/model/NamespaceProperties.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A complex type that contains information about a namespace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceSummary">AWS
   * API Reference</a></p>
   */
  class NamespaceSummary
  {
  public:
    AWS_SERVICEDISCOVERY_API NamespaceSummary();
    AWS_SERVICEDISCOVERY_API NamespaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API NamespaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the namespace.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline NamespaceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline NamespaceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline NamespaceSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the namespace when
     * you create it.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline NamespaceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline NamespaceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline NamespaceSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace. When you create a namespace, Cloud Map
     * automatically creates a Route 53 hosted zone that has the same name as the
     * namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NamespaceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NamespaceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NamespaceSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the namespace, either public or private.</p>
     */
    inline const NamespaceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NamespaceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NamespaceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NamespaceSummary& WithType(const NamespaceType& value) { SetType(value); return *this;}
    inline NamespaceSummary& WithType(NamespaceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline NamespaceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NamespaceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NamespaceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services that were created using the namespace.</p>
     */
    inline int GetServiceCount() const{ return m_serviceCount; }
    inline bool ServiceCountHasBeenSet() const { return m_serviceCountHasBeenSet; }
    inline void SetServiceCount(int value) { m_serviceCountHasBeenSet = true; m_serviceCount = value; }
    inline NamespaceSummary& WithServiceCount(int value) { SetServiceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the namespace.</p>
     */
    inline const NamespaceProperties& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const NamespaceProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(NamespaceProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline NamespaceSummary& WithProperties(const NamespaceProperties& value) { SetProperties(value); return *this;}
    inline NamespaceSummary& WithProperties(NamespaceProperties&& value) { SetProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the namespace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline NamespaceSummary& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline NamespaceSummary& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NamespaceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_serviceCount;
    bool m_serviceCountHasBeenSet = false;

    NamespaceProperties m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
