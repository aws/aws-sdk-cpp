/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/OptionStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The configured endpoint options for a domain and their current
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainEndpointOptionsStatus">AWS
   * API Reference</a></p>
   */
  class DomainEndpointOptionsStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptionsStatus();
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Options to configure the endpoint for a domain.</p>
     */
    inline const DomainEndpointOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Options to configure the endpoint for a domain.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Options to configure the endpoint for a domain.</p>
     */
    inline void SetOptions(const DomainEndpointOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Options to configure the endpoint for a domain.</p>
     */
    inline void SetOptions(DomainEndpointOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Options to configure the endpoint for a domain.</p>
     */
    inline DomainEndpointOptionsStatus& WithOptions(const DomainEndpointOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Options to configure the endpoint for a domain.</p>
     */
    inline DomainEndpointOptionsStatus& WithOptions(DomainEndpointOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the endpoint options for a domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the endpoint options for a domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the endpoint options for a domain.</p>
     */
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the endpoint options for a domain.</p>
     */
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the endpoint options for a domain.</p>
     */
    inline DomainEndpointOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the endpoint options for a domain.</p>
     */
    inline DomainEndpointOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DomainEndpointOptions m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
