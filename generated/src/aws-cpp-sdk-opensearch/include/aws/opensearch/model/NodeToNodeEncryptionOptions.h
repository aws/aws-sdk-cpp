/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

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
   * <p>Enables or disables node-to-node encryption. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/ntn.html">Node-to-node
   * encryption for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/NodeToNodeEncryptionOptions">AWS
   * API Reference</a></p>
   */
  class NodeToNodeEncryptionOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API NodeToNodeEncryptionOptions();
    AWS_OPENSEARCHSERVICE_API NodeToNodeEncryptionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API NodeToNodeEncryptionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True to enable node-to-node encryption.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True to enable node-to-node encryption.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True to enable node-to-node encryption.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True to enable node-to-node encryption.</p>
     */
    inline NodeToNodeEncryptionOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
