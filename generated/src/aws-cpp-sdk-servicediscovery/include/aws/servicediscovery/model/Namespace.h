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
   * <p>A complex type that contains information about a specified
   * namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/Namespace">AWS
   * API Reference</a></p>
   */
  class Namespace
  {
  public:
    AWS_SERVICEDISCOVERY_API Namespace() = default;
    AWS_SERVICEDISCOVERY_API Namespace(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Namespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a namespace.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Namespace& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that Cloud Map assigns to the namespace when
     * you create it.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Namespace& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that created the namespace. If this
     * isn't your account ID, it's the ID of the account that shared the namespace with
     * your account. For more information about shared namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetResourceOwner() const { return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    template<typename ResourceOwnerT = Aws::String>
    void SetResourceOwner(ResourceOwnerT&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::forward<ResourceOwnerT>(value); }
    template<typename ResourceOwnerT = Aws::String>
    Namespace& WithResourceOwner(ResourceOwnerT&& value) { SetResourceOwner(std::forward<ResourceOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace, such as <code>example.com</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Namespace& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the namespace. The methods for discovering instances depends on
     * the value that you specify:</p> <dl> <dt>HTTP</dt> <dd> <p>Instances can be
     * discovered only programmatically, using the Cloud Map
     * <code>DiscoverInstances</code> API.</p> </dd> <dt>DNS_PUBLIC</dt> <dd>
     * <p>Instances can be discovered using public DNS queries and using the
     * <code>DiscoverInstances</code> API.</p> </dd> <dt>DNS_PRIVATE</dt> <dd>
     * <p>Instances can be discovered using DNS queries in VPCs and using the
     * <code>DiscoverInstances</code> API.</p> </dd> </dl>
     */
    inline NamespaceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NamespaceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Namespace& WithType(NamespaceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description that you specify for the namespace when you create it.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Namespace& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services that are associated with the namespace.</p>
     */
    inline int GetServiceCount() const { return m_serviceCount; }
    inline bool ServiceCountHasBeenSet() const { return m_serviceCountHasBeenSet; }
    inline void SetServiceCount(int value) { m_serviceCountHasBeenSet = true; m_serviceCount = value; }
    inline Namespace& WithServiceCount(int value) { SetServiceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information that's specific to the type of the
     * namespace.</p>
     */
    inline const NamespaceProperties& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = NamespaceProperties>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = NamespaceProperties>
    Namespace& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the namespace was created, in Unix date/time format and
     * Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    Namespace& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running an operation twice. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    Namespace& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NamespaceType m_type{NamespaceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_serviceCount{0};
    bool m_serviceCountHasBeenSet = false;

    NamespaceProperties m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
