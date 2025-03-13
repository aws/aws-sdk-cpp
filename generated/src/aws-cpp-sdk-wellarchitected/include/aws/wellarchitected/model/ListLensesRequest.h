/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensType.h>
#include <aws/wellarchitected/model/LensStatusType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to list lenses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensesInput">AWS
   * API Reference</a></p>
   */
  class ListLensesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListLensesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLenses"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLensesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLensesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of lenses to be returned.</p>
     */
    inline LensType GetLensType() const { return m_lensType; }
    inline bool LensTypeHasBeenSet() const { return m_lensTypeHasBeenSet; }
    inline void SetLensType(LensType value) { m_lensTypeHasBeenSet = true; m_lensType = value; }
    inline ListLensesRequest& WithLensType(LensType value) { SetLensType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of lenses to be returned.</p>
     */
    inline LensStatusType GetLensStatus() const { return m_lensStatus; }
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }
    inline void SetLensStatus(LensStatusType value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }
    inline ListLensesRequest& WithLensStatus(LensStatusType value) { SetLensStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensName() const { return m_lensName; }
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }
    template<typename LensNameT = Aws::String>
    void SetLensName(LensNameT&& value) { m_lensNameHasBeenSet = true; m_lensName = std::forward<LensNameT>(value); }
    template<typename LensNameT = Aws::String>
    ListLensesRequest& WithLensName(LensNameT&& value) { SetLensName(std::forward<LensNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    LensType m_lensType{LensType::NOT_SET};
    bool m_lensTypeHasBeenSet = false;

    LensStatusType m_lensStatus{LensStatusType::NOT_SET};
    bool m_lensStatusHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
