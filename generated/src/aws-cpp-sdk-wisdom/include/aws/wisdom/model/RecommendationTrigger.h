/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/RecommendationTriggerData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/RecommendationSourceType.h>
#include <aws/wisdom/model/RecommendationTriggerType.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>A recommendation trigger provides context on the event that produced the
   * referenced recommendations. Recommendations are only referenced in
   * <code>recommendationIds</code> by a single RecommendationTrigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/RecommendationTrigger">AWS
   * API Reference</a></p>
   */
  class RecommendationTrigger
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API RecommendationTrigger() = default;
    AWS_CONNECTWISDOMSERVICE_API RecommendationTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API RecommendationTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline const RecommendationTriggerData& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = RecommendationTriggerData>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = RecommendationTriggerData>
    RecommendationTrigger& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RecommendationTrigger& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const { return m_recommendationIds; }
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    void SetRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::forward<RecommendationIdsT>(value); }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    RecommendationTrigger& WithRecommendationIds(RecommendationIdsT&& value) { SetRecommendationIds(std::forward<RecommendationIdsT>(value)); return *this;}
    template<typename RecommendationIdsT = Aws::String>
    RecommendationTrigger& AddRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.emplace_back(std::forward<RecommendationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline RecommendationSourceType GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(RecommendationSourceType value) { m_sourceHasBeenSet = true; m_source = value; }
    inline RecommendationTrigger& WithSource(RecommendationSourceType value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline RecommendationTriggerType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RecommendationTriggerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RecommendationTrigger& WithType(RecommendationTriggerType value) { SetType(value); return *this;}
    ///@}
  private:

    RecommendationTriggerData m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    RecommendationSourceType m_source{RecommendationSourceType::NOT_SET};
    bool m_sourceHasBeenSet = false;

    RecommendationTriggerType m_type{RecommendationTriggerType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
