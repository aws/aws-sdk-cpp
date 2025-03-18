/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class ListAdaptersRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API ListAdaptersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAdapters"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the lower bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created after the specified creation
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterCreationTime() const { return m_afterCreationTime; }
    inline bool AfterCreationTimeHasBeenSet() const { return m_afterCreationTimeHasBeenSet; }
    template<typename AfterCreationTimeT = Aws::Utils::DateTime>
    void SetAfterCreationTime(AfterCreationTimeT&& value) { m_afterCreationTimeHasBeenSet = true; m_afterCreationTime = std::forward<AfterCreationTimeT>(value); }
    template<typename AfterCreationTimeT = Aws::Utils::DateTime>
    ListAdaptersRequest& WithAfterCreationTime(AfterCreationTimeT&& value) { SetAfterCreationTime(std::forward<AfterCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the upper bound for the ListAdapters operation. Ensures
     * ListAdapters returns only adapters created before the specified creation
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeCreationTime() const { return m_beforeCreationTime; }
    inline bool BeforeCreationTimeHasBeenSet() const { return m_beforeCreationTimeHasBeenSet; }
    template<typename BeforeCreationTimeT = Aws::Utils::DateTime>
    void SetBeforeCreationTime(BeforeCreationTimeT&& value) { m_beforeCreationTimeHasBeenSet = true; m_beforeCreationTime = std::forward<BeforeCreationTimeT>(value); }
    template<typename BeforeCreationTimeT = Aws::Utils::DateTime>
    ListAdaptersRequest& WithBeforeCreationTime(BeforeCreationTimeT&& value) { SetBeforeCreationTime(std::forward<BeforeCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return when listing adapters.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAdaptersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAdaptersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterCreationTime{};
    bool m_afterCreationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_beforeCreationTime{};
    bool m_beforeCreationTimeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
