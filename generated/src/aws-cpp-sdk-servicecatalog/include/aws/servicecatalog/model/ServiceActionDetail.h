/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ServiceActionSummary.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ServiceActionDefinitionKey.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An object containing detailed information about the self-service
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ServiceActionDetail">AWS
   * API Reference</a></p>
   */
  class ServiceActionDetail
  {
  public:
    AWS_SERVICECATALOG_API ServiceActionDetail() = default;
    AWS_SERVICECATALOG_API ServiceActionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ServiceActionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Summary information about the self-service action.</p>
     */
    inline const ServiceActionSummary& GetServiceActionSummary() const { return m_serviceActionSummary; }
    inline bool ServiceActionSummaryHasBeenSet() const { return m_serviceActionSummaryHasBeenSet; }
    template<typename ServiceActionSummaryT = ServiceActionSummary>
    void SetServiceActionSummary(ServiceActionSummaryT&& value) { m_serviceActionSummaryHasBeenSet = true; m_serviceActionSummary = std::forward<ServiceActionSummaryT>(value); }
    template<typename ServiceActionSummaryT = ServiceActionSummary>
    ServiceActionDetail& WithServiceActionSummary(ServiceActionSummaryT&& value) { SetServiceActionSummary(std::forward<ServiceActionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the self-service action.</p>
     */
    inline const Aws::Map<ServiceActionDefinitionKey, Aws::String>& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::Map<ServiceActionDefinitionKey, Aws::String>>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::Map<ServiceActionDefinitionKey, Aws::String>>
    ServiceActionDetail& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    inline ServiceActionDetail& AddDefinition(ServiceActionDefinitionKey key, Aws::String value) {
      m_definitionHasBeenSet = true; m_definition.emplace(key, value); return *this;
    }
    ///@}
  private:

    ServiceActionSummary m_serviceActionSummary;
    bool m_serviceActionSummaryHasBeenSet = false;

    Aws::Map<ServiceActionDefinitionKey, Aws::String> m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
