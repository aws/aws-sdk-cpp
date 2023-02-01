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
    AWS_OPENSEARCHSERVICE_API StorageTypeLimit();
    AWS_OPENSEARCHSERVICE_API StorageTypeLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API StorageTypeLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetLimitName() const{ return m_limitName; }

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
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }

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
    inline void SetLimitName(const Aws::String& value) { m_limitNameHasBeenSet = true; m_limitName = value; }

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
    inline void SetLimitName(Aws::String&& value) { m_limitNameHasBeenSet = true; m_limitName = std::move(value); }

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
    inline void SetLimitName(const char* value) { m_limitNameHasBeenSet = true; m_limitName.assign(value); }

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
    inline StorageTypeLimit& WithLimitName(const Aws::String& value) { SetLimitName(value); return *this;}

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
    inline StorageTypeLimit& WithLimitName(Aws::String&& value) { SetLimitName(std::move(value)); return *this;}

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
    inline StorageTypeLimit& WithLimitName(const char* value) { SetLimitName(value); return *this;}


    /**
     * <p>The limit values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLimitValues() const{ return m_limitValues; }

    /**
     * <p>The limit values.</p>
     */
    inline bool LimitValuesHasBeenSet() const { return m_limitValuesHasBeenSet; }

    /**
     * <p>The limit values.</p>
     */
    inline void SetLimitValues(const Aws::Vector<Aws::String>& value) { m_limitValuesHasBeenSet = true; m_limitValues = value; }

    /**
     * <p>The limit values.</p>
     */
    inline void SetLimitValues(Aws::Vector<Aws::String>&& value) { m_limitValuesHasBeenSet = true; m_limitValues = std::move(value); }

    /**
     * <p>The limit values.</p>
     */
    inline StorageTypeLimit& WithLimitValues(const Aws::Vector<Aws::String>& value) { SetLimitValues(value); return *this;}

    /**
     * <p>The limit values.</p>
     */
    inline StorageTypeLimit& WithLimitValues(Aws::Vector<Aws::String>&& value) { SetLimitValues(std::move(value)); return *this;}

    /**
     * <p>The limit values.</p>
     */
    inline StorageTypeLimit& AddLimitValues(const Aws::String& value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(value); return *this; }

    /**
     * <p>The limit values.</p>
     */
    inline StorageTypeLimit& AddLimitValues(Aws::String&& value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The limit values.</p>
     */
    inline StorageTypeLimit& AddLimitValues(const char* value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(value); return *this; }

  private:

    Aws::String m_limitName;
    bool m_limitNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_limitValues;
    bool m_limitValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
