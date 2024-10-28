/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
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
   * <p>Container for specifying configuration of any node type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/NodeConfig">AWS
   * API Reference</a></p>
   */
  class NodeConfig
  {
  public:
    AWS_OPENSEARCHSERVICE_API NodeConfig();
    AWS_OPENSEARCHSERVICE_API NodeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API NodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A boolean that indicates whether a particular node type is enabled or
     * not.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline NodeConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of a particular node type in the cluster.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const OpenSearchPartitionInstanceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(OpenSearchPartitionInstanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NodeConfig& WithType(const OpenSearchPartitionInstanceType& value) { SetType(value); return *this;}
    inline NodeConfig& WithType(OpenSearchPartitionInstanceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes of a particular node type in the cluster.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline NodeConfig& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    OpenSearchPartitionInstanceType m_type;
    bool m_typeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
