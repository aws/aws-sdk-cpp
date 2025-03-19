/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/QueryRecommendationTriggerData.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>A union type containing information related to the trigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RecommendationTriggerData">AWS
   * API Reference</a></p>
   */
  class RecommendationTriggerData
  {
  public:
    AWS_QCONNECT_API RecommendationTriggerData() = default;
    AWS_QCONNECT_API RecommendationTriggerData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API RecommendationTriggerData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Data associated with the QUERY RecommendationTriggerType.</p>
     */
    inline const QueryRecommendationTriggerData& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = QueryRecommendationTriggerData>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = QueryRecommendationTriggerData>
    RecommendationTriggerData& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}
  private:

    QueryRecommendationTriggerData m_query;
    bool m_queryHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
