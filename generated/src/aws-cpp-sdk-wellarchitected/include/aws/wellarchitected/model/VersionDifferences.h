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
    AWS_WELLARCHITECTED_API VersionDifferences();
    AWS_WELLARCHITECTED_API VersionDifferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API VersionDifferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline const Aws::Vector<PillarDifference>& GetPillarDifferences() const{ return m_pillarDifferences; }

    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline bool PillarDifferencesHasBeenSet() const { return m_pillarDifferencesHasBeenSet; }

    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline void SetPillarDifferences(const Aws::Vector<PillarDifference>& value) { m_pillarDifferencesHasBeenSet = true; m_pillarDifferences = value; }

    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline void SetPillarDifferences(Aws::Vector<PillarDifference>&& value) { m_pillarDifferencesHasBeenSet = true; m_pillarDifferences = std::move(value); }

    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline VersionDifferences& WithPillarDifferences(const Aws::Vector<PillarDifference>& value) { SetPillarDifferences(value); return *this;}

    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline VersionDifferences& WithPillarDifferences(Aws::Vector<PillarDifference>&& value) { SetPillarDifferences(std::move(value)); return *this;}

    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline VersionDifferences& AddPillarDifferences(const PillarDifference& value) { m_pillarDifferencesHasBeenSet = true; m_pillarDifferences.push_back(value); return *this; }

    /**
     * <p>The differences between the base and latest versions of the lens.</p>
     */
    inline VersionDifferences& AddPillarDifferences(PillarDifference&& value) { m_pillarDifferencesHasBeenSet = true; m_pillarDifferences.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PillarDifference> m_pillarDifferences;
    bool m_pillarDifferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
