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
   * <p>List export errors request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListExportErrorsRequest">AWS
   * API Reference</a></p>
   */
  class ListExportErrorsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ListExportErrorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExportErrors"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>List export errors request export id.</p>
     */
    inline const Aws::String& GetExportID() const{ return m_exportID; }
    inline bool ExportIDHasBeenSet() const { return m_exportIDHasBeenSet; }
    inline void SetExportID(const Aws::String& value) { m_exportIDHasBeenSet = true; m_exportID = value; }
    inline void SetExportID(Aws::String&& value) { m_exportIDHasBeenSet = true; m_exportID = std::move(value); }
    inline void SetExportID(const char* value) { m_exportIDHasBeenSet = true; m_exportID.assign(value); }
    inline ListExportErrorsRequest& WithExportID(const Aws::String& value) { SetExportID(value); return *this;}
    inline ListExportErrorsRequest& WithExportID(Aws::String&& value) { SetExportID(std::move(value)); return *this;}
    inline ListExportErrorsRequest& WithExportID(const char* value) { SetExportID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List export errors request max results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListExportErrorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List export errors request next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListExportErrorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExportErrorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExportErrorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_exportID;
    bool m_exportIDHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
