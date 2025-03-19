/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Limits that are applicable for the given Amazon OpenSearch Service storage
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StorageTypeLimit">AWS
   * API Reference</a></p>
   */
  class StorageTypeLimit
  {
  public:
    AWS_OPENSEARCHSERVICE_API StorageTypeLimit() = default;
    AWS_OPENSEARCHSERVICE_API StorageTypeLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API StorageTypeLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of storage limits that are applicable for the given storage type. If
     * <code>StorageType</code> is <code>ebs</code>, the following options are
     * available:</p> <ul> <li> <p> <b>MinimumVolumeSize</b> - Minimum volume size that
     * is available for the given storage type. Can be empty if not applicable.</p>
     * </li> <li> <p> <b>MaximumVolumeSize</b> - Maximum volume size that is available
     * for the given storage type. Can be empty if not applicable.</p> </li> <li> <p>
     * <b>MaximumIops</b> - Maximum amount of IOPS that is available for the given the
     * storage type. Can be empty if not applicable.</p> </li> <li> <p>
     * <b>MinimumIops</b> - Minimum amount of IOPS that is available for the given the
     * storage type. Can be empty if not applicable.</p> </li> <li> <p>
     * <b>MaximumThroughput</b> - Maximum amount of throughput that is available for
     * the given the storage type. Can be empty if not applicable.</p> </li> <li> <p>
     * <b>MinimumThroughput</b> - Minimum amount of throughput that is available for
     * the given the storage type. Can be empty if not applicable.</p> </li> </ul>
     */
    inline const Aws::String& GetLimitName() const { return m_limitName; }
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }
    template<typename LimitNameT = Aws::String>
    void SetLimitName(LimitNameT&& value) { m_limitNameHasBeenSet = true; m_limitName = std::forward<LimitNameT>(value); }
    template<typename LimitNameT = Aws::String>
    StorageTypeLimit& WithLimitName(LimitNameT&& value) { SetLimitName(std::forward<LimitNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLimitValues() const { return m_limitValues; }
    inline bool LimitValuesHasBeenSet() const { return m_limitValuesHasBeenSet; }
    template<typename LimitValuesT = Aws::Vector<Aws::String>>
    void SetLimitValues(LimitValuesT&& value) { m_limitValuesHasBeenSet = true; m_limitValues = std::forward<LimitValuesT>(value); }
    template<typename LimitValuesT = Aws::Vector<Aws::String>>
    StorageTypeLimit& WithLimitValues(LimitValuesT&& value) { SetLimitValues(std::forward<LimitValuesT>(value)); return *this;}
    template<typename LimitValuesT = Aws::String>
    StorageTypeLimit& AddLimitValues(LimitValuesT&& value) { m_limitValuesHasBeenSet = true; m_limitValues.emplace_back(std::forward<LimitValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_limitName;
    bool m_limitNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_limitValues;
    bool m_limitValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
