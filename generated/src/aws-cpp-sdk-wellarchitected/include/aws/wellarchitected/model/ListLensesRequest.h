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
    AWS_WELLARCHITECTED_API ListLensesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLenses"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListLensesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListLensesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListLensesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListLensesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The type of lenses to be returned.</p>
     */
    inline const LensType& GetLensType() const{ return m_lensType; }

    /**
     * <p>The type of lenses to be returned.</p>
     */
    inline bool LensTypeHasBeenSet() const { return m_lensTypeHasBeenSet; }

    /**
     * <p>The type of lenses to be returned.</p>
     */
    inline void SetLensType(const LensType& value) { m_lensTypeHasBeenSet = true; m_lensType = value; }

    /**
     * <p>The type of lenses to be returned.</p>
     */
    inline void SetLensType(LensType&& value) { m_lensTypeHasBeenSet = true; m_lensType = std::move(value); }

    /**
     * <p>The type of lenses to be returned.</p>
     */
    inline ListLensesRequest& WithLensType(const LensType& value) { SetLensType(value); return *this;}

    /**
     * <p>The type of lenses to be returned.</p>
     */
    inline ListLensesRequest& WithLensType(LensType&& value) { SetLensType(std::move(value)); return *this;}


    /**
     * <p>The status of lenses to be returned.</p>
     */
    inline const LensStatusType& GetLensStatus() const{ return m_lensStatus; }

    /**
     * <p>The status of lenses to be returned.</p>
     */
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }

    /**
     * <p>The status of lenses to be returned.</p>
     */
    inline void SetLensStatus(const LensStatusType& value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }

    /**
     * <p>The status of lenses to be returned.</p>
     */
    inline void SetLensStatus(LensStatusType&& value) { m_lensStatusHasBeenSet = true; m_lensStatus = std::move(value); }

    /**
     * <p>The status of lenses to be returned.</p>
     */
    inline ListLensesRequest& WithLensStatus(const LensStatusType& value) { SetLensStatus(value); return *this;}

    /**
     * <p>The status of lenses to be returned.</p>
     */
    inline ListLensesRequest& WithLensStatus(LensStatusType&& value) { SetLensStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetLensName() const{ return m_lensName; }

    
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }

    
    inline void SetLensName(const Aws::String& value) { m_lensNameHasBeenSet = true; m_lensName = value; }

    
    inline void SetLensName(Aws::String&& value) { m_lensNameHasBeenSet = true; m_lensName = std::move(value); }

    
    inline void SetLensName(const char* value) { m_lensNameHasBeenSet = true; m_lensName.assign(value); }

    
    inline ListLensesRequest& WithLensName(const Aws::String& value) { SetLensName(value); return *this;}

    
    inline ListLensesRequest& WithLensName(Aws::String&& value) { SetLensName(std::move(value)); return *this;}

    
    inline ListLensesRequest& WithLensName(const char* value) { SetLensName(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    LensType m_lensType;
    bool m_lensTypeHasBeenSet = false;

    LensStatusType m_lensStatus;
    bool m_lensStatusHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
