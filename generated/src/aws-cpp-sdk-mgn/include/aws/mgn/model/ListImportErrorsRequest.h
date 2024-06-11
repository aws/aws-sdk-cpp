﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   * <p>List import errors request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListImportErrorsRequest">AWS
   * API Reference</a></p>
   */
  class ListImportErrorsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ListImportErrorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImportErrors"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>List import errors request import id.</p>
     */
    inline const Aws::String& GetImportID() const{ return m_importID; }
    inline bool ImportIDHasBeenSet() const { return m_importIDHasBeenSet; }
    inline void SetImportID(const Aws::String& value) { m_importIDHasBeenSet = true; m_importID = value; }
    inline void SetImportID(Aws::String&& value) { m_importIDHasBeenSet = true; m_importID = std::move(value); }
    inline void SetImportID(const char* value) { m_importIDHasBeenSet = true; m_importID.assign(value); }
    inline ListImportErrorsRequest& WithImportID(const Aws::String& value) { SetImportID(value); return *this;}
    inline ListImportErrorsRequest& WithImportID(Aws::String&& value) { SetImportID(std::move(value)); return *this;}
    inline ListImportErrorsRequest& WithImportID(const char* value) { SetImportID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List import errors request max results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListImportErrorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List import errors request next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListImportErrorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImportErrorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImportErrorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_importID;
    bool m_importIDHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
