/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The connection properties of an outbound connection.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ConnectionProperties">AWS
   * API Reference</a></p>
   */
  class ConnectionProperties
  {
  public:
    AWS_OPENSEARCHSERVICE_API ConnectionProperties();
    AWS_OPENSEARCHSERVICE_API ConnectionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ConnectionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline ConnectionProperties& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline ConnectionProperties& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the remote domain.</p>
     */
    inline ConnectionProperties& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
