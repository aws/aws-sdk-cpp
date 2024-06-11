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
    AWS_QBUSINESS_API UpdateIndexRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateIndexRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateIndexRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline UpdateIndexRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline UpdateIndexRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateIndexRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateIndexRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon Q Business index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity units you want to provision for your Amazon Q Business
     * index. You can add and remove capacity to fit your usage needs.</p>
     */
    inline const IndexCapacityConfiguration& GetCapacityConfiguration() const{ return m_capacityConfiguration; }
    inline bool CapacityConfigurationHasBeenSet() const { return m_capacityConfigurationHasBeenSet; }
    inline void SetCapacityConfiguration(const IndexCapacityConfiguration& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = value; }
    inline void SetCapacityConfiguration(IndexCapacityConfiguration&& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = std::move(value); }
    inline UpdateIndexRequest& WithCapacityConfiguration(const IndexCapacityConfiguration& value) { SetCapacityConfiguration(value); return *this;}
    inline UpdateIndexRequest& WithCapacityConfiguration(IndexCapacityConfiguration&& value) { SetCapacityConfiguration(std::move(value)); return *this;}
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
    inline const Aws::Vector<DocumentAttributeConfiguration>& GetDocumentAttributeConfigurations() const{ return m_documentAttributeConfigurations; }
    inline bool DocumentAttributeConfigurationsHasBeenSet() const { return m_documentAttributeConfigurationsHasBeenSet; }
    inline void SetDocumentAttributeConfigurations(const Aws::Vector<DocumentAttributeConfiguration>& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations = value; }
    inline void SetDocumentAttributeConfigurations(Aws::Vector<DocumentAttributeConfiguration>&& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations = std::move(value); }
    inline UpdateIndexRequest& WithDocumentAttributeConfigurations(const Aws::Vector<DocumentAttributeConfiguration>& value) { SetDocumentAttributeConfigurations(value); return *this;}
    inline UpdateIndexRequest& WithDocumentAttributeConfigurations(Aws::Vector<DocumentAttributeConfiguration>&& value) { SetDocumentAttributeConfigurations(std::move(value)); return *this;}
    inline UpdateIndexRequest& AddDocumentAttributeConfigurations(const DocumentAttributeConfiguration& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations.push_back(value); return *this; }
    inline UpdateIndexRequest& AddDocumentAttributeConfigurations(DocumentAttributeConfiguration&& value) { m_documentAttributeConfigurationsHasBeenSet = true; m_documentAttributeConfigurations.push_back(std::move(value)); return *this; }
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
