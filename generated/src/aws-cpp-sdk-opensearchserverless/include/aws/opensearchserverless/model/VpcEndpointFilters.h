/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/VpcEndpointStatus.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Filter the results of a <code>ListVpcEndpoints</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/VpcEndpointFilters">AWS
   * API Reference</a></p>
   */
  class VpcEndpointFilters
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API VpcEndpointFilters();
    AWS_OPENSEARCHSERVERLESS_API VpcEndpointFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API VpcEndpointFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the endpoint.</p>
     */
    inline const VpcEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline void SetStatus(const VpcEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline void SetStatus(VpcEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline VpcEndpointFilters& WithStatus(const VpcEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the endpoint.</p>
     */
    inline VpcEndpointFilters& WithStatus(VpcEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    VpcEndpointStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
