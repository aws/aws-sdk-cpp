/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/PillarDifference.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The differences between the base and latest versions of the
   * lens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/VersionDifferences">AWS
   * API Reference</a></p>
   */
  class VersionDifferences
  {
  public:
    AWS_WELLARCHITECTED_API VersionDifferences() = default;
    AWS_WELLARCHITECTED_API VersionDifferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API VersionDifferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline const Aws::Vector<PillarDifference>& GetPillarDifferences() const { return m_pillarDifferences; }
    inline bool PillarDifferencesHasBeenSet() const { return m_pillarDifferencesHasBeenSet; }
    template<typename PillarDifferencesT = Aws::Vector<PillarDifference>>
    void SetPillarDifferences(PillarDifferencesT&& value) { m_pillarDifferencesHasBeenSet = true; m_pillarDifferences = std::forward<PillarDifferencesT>(value); }
    template<typename PillarDifferencesT = Aws::Vector<PillarDifference>>
    VersionDifferences& WithPillarDifferences(PillarDifferencesT&& value) { SetPillarDifferences(std::forward<PillarDifferencesT>(value)); return *this;}
    template<typename PillarDifferencesT = PillarDifference>
    VersionDifferences& AddPillarDifferences(PillarDifferencesT&& value) { m_pillarDifferencesHasBeenSet = true; m_pillarDifferences.emplace_back(std::forward<PillarDifferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PillarDifference> m_pillarDifferences;
    bool m_pillarDifferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
