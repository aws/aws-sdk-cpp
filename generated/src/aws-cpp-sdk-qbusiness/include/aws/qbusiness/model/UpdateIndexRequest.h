/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/IndexCapacityConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentAttributeConfiguration.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateIndexRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateIndexRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIndex"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application connected to the
     * index.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateIndexRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    UpdateIndexRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateIndexRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateIndexRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity units you want to provision for your Amazon Q Business
     * index. You can add and remove capacity to fit your usage needs.</p>
     */
    inline const IndexCapacityConfiguration& GetCapacityConfiguration() const { return m_capacityConfiguration; }
    inline bool CapacityConfigurationHasBeenSet() const { return m_capacityConfigurationHasBeenSet; }
    template<typename CapacityConfigurationT = IndexCapacityConfiguration>
    void SetCapacityConfiguration(CapacityConfigurationT&& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = std::forward<CapacityConfigurationT>(value); }
    template<typename CapacityConfigurationT = IndexCapacityConfiguration>
    UpdateIndexRequest& WithCapacityConfiguration(CapacityConfigurationT&& value) { SetCapacityConfiguration(std::forward<CapacityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for document metadata or fields. Document metadata
     * are fields or attributes associated with your documents. For example, the
     * company department name associated with each document. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/doc-attributes-types.html#doc-attributes">Understanding
     * document attributes</a>.</p>
     */
    inline const Aws::Vector<DocumentAttributeConfiguration>& GetDocumentAttributeConfigurations() const { return m_documentAttributeConfigurations; }
    inline bool DocumentAttributeConfigurationsHasBeenSet() const { return m_documentAttributeConfigurationsHasBeenSet; }
    template<typename DocumentAttributeConfigurationsT = Aws::Vector<DocumentAttributeConfiguration>>
    void SetDocumentAttributeConfigurations(DocumentAttributeConfigurationsT&& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations = std::forward<DocumentAttributeConfigurationsT>(value); }
    template<typename DocumentAttributeConfigurationsT = Aws::Vector<DocumentAttributeConfiguration>>
    UpdateIndexRequest& WithDocumentAttributeConfigurations(DocumentAttributeConfigurationsT&& value) { SetDocumentAttributeConfigurations(std::forward<DocumentAttributeConfigurationsT>(value)); return *this;}
    template<typename DocumentAttributeConfigurationsT = DocumentAttributeConfiguration>
    UpdateIndexRequest& AddDocumentAttributeConfigurations(DocumentAttributeConfigurationsT&& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations.emplace_back(std::forward<DocumentAttributeConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IndexCapacityConfiguration m_capacityConfiguration;
    bool m_capacityConfigurationHasBeenSet = false;

    Aws::Vector<DocumentAttributeConfiguration> m_documentAttributeConfigurations;
    bool m_documentAttributeConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
