/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyIntegrationRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIntegration"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of the integration to modify.</p>
     */
    inline const Aws::String& GetIntegrationIdentifier() const { return m_integrationIdentifier; }
    inline bool IntegrationIdentifierHasBeenSet() const { return m_integrationIdentifierHasBeenSet; }
    template<typename IntegrationIdentifierT = Aws::String>
    void SetIntegrationIdentifier(IntegrationIdentifierT&& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = std::forward<IntegrationIdentifierT>(value); }
    template<typename IntegrationIdentifierT = Aws::String>
    ModifyIntegrationRequest& WithIntegrationIdentifier(IntegrationIdentifierT&& value) { SetIntegrationIdentifier(std::forward<IntegrationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const { return m_integrationName; }
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }
    template<typename IntegrationNameT = Aws::String>
    void SetIntegrationName(IntegrationNameT&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::forward<IntegrationNameT>(value); }
    template<typename IntegrationNameT = Aws::String>
    ModifyIntegrationRequest& WithIntegrationName(IntegrationNameT&& value) { SetIntegrationName(std::forward<IntegrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new data filter for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Zero_ETL_Filtering.html">Data
     * filtering for Aurora zero-ETL integrations with Amazon Redshift</a> or <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/zero-etl.filtering.html">Data
     * filtering for Amazon RDS zero-ETL integrations with Amazon Redshift</a>.</p>
     */
    inline const Aws::String& GetDataFilter() const { return m_dataFilter; }
    inline bool DataFilterHasBeenSet() const { return m_dataFilterHasBeenSet; }
    template<typename DataFilterT = Aws::String>
    void SetDataFilter(DataFilterT&& value) { m_dataFilterHasBeenSet = true; m_dataFilter = std::forward<DataFilterT>(value); }
    template<typename DataFilterT = Aws::String>
    ModifyIntegrationRequest& WithDataFilter(DataFilterT&& value) { SetDataFilter(std::forward<DataFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the integration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyIntegrationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationIdentifier;
    bool m_integrationIdentifierHasBeenSet = false;

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    Aws::String m_dataFilter;
    bool m_dataFilterHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
