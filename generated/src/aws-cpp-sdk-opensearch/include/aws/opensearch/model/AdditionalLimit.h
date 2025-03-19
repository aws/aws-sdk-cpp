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
   * <p> List of limits that are specific to a given instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AdditionalLimit">AWS
   * API Reference</a></p>
   */
  class AdditionalLimit
  {
  public:
    AWS_OPENSEARCHSERVICE_API AdditionalLimit() = default;
    AWS_OPENSEARCHSERVICE_API AdditionalLimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AdditionalLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <ul> <li> <p> <code>MaximumNumberOfDataNodesSupported</code> - This attribute
     * only applies to master nodes and specifies the maximum number of data nodes of a
     * given instance type a master node can support.</p> </li> <li> <p>
     * <code>MaximumNumberOfDataNodesWithoutMasterNode</code> - This attribute only
     * applies to data nodes and specifies the maximum number of data nodes of a given
     * instance type can exist without a master node governing them.</p> </li> </ul>
     */
    inline const Aws::String& GetLimitName() const { return m_limitName; }
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }
    template<typename LimitNameT = Aws::String>
    void SetLimitName(LimitNameT&& value) { m_limitNameHasBeenSet = true; m_limitName = std::forward<LimitNameT>(value); }
    template<typename LimitNameT = Aws::String>
    AdditionalLimit& WithLimitName(LimitNameT&& value) { SetLimitName(std::forward<LimitNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The values of the additional instance type limits.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLimitValues() const { return m_limitValues; }
    inline bool LimitValuesHasBeenSet() const { return m_limitValuesHasBeenSet; }
    template<typename LimitValuesT = Aws::Vector<Aws::String>>
    void SetLimitValues(LimitValuesT&& value) { m_limitValuesHasBeenSet = true; m_limitValues = std::forward<LimitValuesT>(value); }
    template<typename LimitValuesT = Aws::Vector<Aws::String>>
    AdditionalLimit& WithLimitValues(LimitValuesT&& value) { SetLimitValues(std::forward<LimitValuesT>(value)); return *this;}
    template<typename LimitValuesT = Aws::String>
    AdditionalLimit& AddLimitValues(LimitValuesT&& value) { m_limitValuesHasBeenSet = true; m_limitValues.emplace_back(std::forward<LimitValuesT>(value)); return *this; }
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
