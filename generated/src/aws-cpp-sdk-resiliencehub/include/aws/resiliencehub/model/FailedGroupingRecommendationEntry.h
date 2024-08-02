/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates the accepted grouping recommendation whose implementation
   * failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/FailedGroupingRecommendationEntry">AWS
   * API Reference</a></p>
   */
  class FailedGroupingRecommendationEntry
  {
  public:
    AWS_RESILIENCEHUB_API FailedGroupingRecommendationEntry();
    AWS_RESILIENCEHUB_API FailedGroupingRecommendationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API FailedGroupingRecommendationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the error that occurred while implementing a grouping
     * recommendation.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline FailedGroupingRecommendationEntry& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline FailedGroupingRecommendationEntry& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline FailedGroupingRecommendationEntry& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the identifier of the grouping recommendation.</p>
     */
    inline const Aws::String& GetGroupingRecommendationId() const{ return m_groupingRecommendationId; }
    inline bool GroupingRecommendationIdHasBeenSet() const { return m_groupingRecommendationIdHasBeenSet; }
    inline void SetGroupingRecommendationId(const Aws::String& value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId = value; }
    inline void SetGroupingRecommendationId(Aws::String&& value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId = std::move(value); }
    inline void SetGroupingRecommendationId(const char* value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId.assign(value); }
    inline FailedGroupingRecommendationEntry& WithGroupingRecommendationId(const Aws::String& value) { SetGroupingRecommendationId(value); return *this;}
    inline FailedGroupingRecommendationEntry& WithGroupingRecommendationId(Aws::String&& value) { SetGroupingRecommendationId(std::move(value)); return *this;}
    inline FailedGroupingRecommendationEntry& WithGroupingRecommendationId(const char* value) { SetGroupingRecommendationId(value); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_groupingRecommendationId;
    bool m_groupingRecommendationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
