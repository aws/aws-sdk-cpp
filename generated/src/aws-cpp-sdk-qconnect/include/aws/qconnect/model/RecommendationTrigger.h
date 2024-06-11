﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/RecommendationTriggerData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/RecommendationSourceType.h>
#include <aws/qconnect/model/RecommendationTriggerType.h>
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
   * <p>A recommendation trigger provides context on the event that produced the
   * referenced recommendations. Recommendations are only referenced in
   * <code>recommendationIds</code> by a single RecommendationTrigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RecommendationTrigger">AWS
   * API Reference</a></p>
   */
  class RecommendationTrigger
  {
  public:
    AWS_QCONNECT_API RecommendationTrigger();
    AWS_QCONNECT_API RecommendationTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API RecommendationTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A union type containing information related to the trigger.</p>
     */
    inline const RecommendationTriggerData& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const RecommendationTriggerData& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(RecommendationTriggerData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline RecommendationTrigger& WithData(const RecommendationTriggerData& value) { SetData(value); return *this;}
    inline RecommendationTrigger& WithData(RecommendationTriggerData&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the recommendation trigger.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RecommendationTrigger& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RecommendationTrigger& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RecommendationTrigger& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }
    inline RecommendationTrigger& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}
    inline RecommendationTrigger& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}
    inline RecommendationTrigger& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }
    inline RecommendationTrigger& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }
    inline RecommendationTrigger& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source of the recommendation trigger.</p> <ul> <li> <p>ISSUE_DETECTION:
     * The corresponding recommendations were triggered by a Contact Lens issue.</p>
     * </li> <li> <p>RULE_EVALUATION: The corresponding recommendations were triggered
     * by a Contact Lens rule.</p> </li> </ul>
     */
    inline const RecommendationSourceType& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const RecommendationSourceType& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(RecommendationSourceType&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline RecommendationTrigger& WithSource(const RecommendationSourceType& value) { SetSource(value); return *this;}
    inline RecommendationTrigger& WithSource(RecommendationSourceType&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of recommendation trigger.</p>
     */
    inline const RecommendationTriggerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RecommendationTriggerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RecommendationTriggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RecommendationTrigger& WithType(const RecommendationTriggerType& value) { SetType(value); return *this;}
    inline RecommendationTrigger& WithType(RecommendationTriggerType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    RecommendationTriggerData m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    RecommendationSourceType m_source;
    bool m_sourceHasBeenSet = false;

    RecommendationTriggerType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
