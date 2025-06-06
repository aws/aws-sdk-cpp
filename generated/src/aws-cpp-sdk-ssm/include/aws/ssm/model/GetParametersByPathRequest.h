﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ParameterStringFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetParametersByPathRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetParametersByPathRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParametersByPath"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The hierarchy for the parameter. Hierarchies start with a forward slash (/).
     * The hierarchy is the parameter name except the last part of the parameter. For
     * the API call to succeed, the last part of the parameter name can't be in the
     * path. A parameter name hierarchy can have a maximum of 15 levels. Here is an
     * example of a hierarchy: <code>/Finance/Prod/IAD/WinServ2016/license33 </code>
     * </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    GetParametersByPathRequest& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieve all parameters within a hierarchy.</p>  <p>If a user has
     * access to a path, then the user can access all levels of that path. For example,
     * if a user has permission to access path <code>/a</code>, then the user can also
     * access <code>/a/b</code>. Even if a user has explicitly been denied access in
     * IAM for parameter <code>/a/b</code>, they can still call the GetParametersByPath
     * API operation recursively for <code>/a</code> and view <code>/a/b</code>.</p>
     * 
     */
    inline bool GetRecursive() const { return m_recursive; }
    inline bool RecursiveHasBeenSet() const { return m_recursiveHasBeenSet; }
    inline void SetRecursive(bool value) { m_recursiveHasBeenSet = true; m_recursive = value; }
    inline GetParametersByPathRequest& WithRecursive(bool value) { SetRecursive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters to limit the request results.</p>  <p>The following
     * <code>Key</code> values are supported for <code>GetParametersByPath</code>:
     * <code>Type</code>, <code>KeyId</code>, and <code>Label</code>.</p> <p>The
     * following <code>Key</code> values aren't supported for
     * <code>GetParametersByPath</code>: <code>tag</code>, <code>DataType</code>,
     * <code>Name</code>, <code>Path</code>, and <code>Tier</code>.</p> 
     */
    inline const Aws::Vector<ParameterStringFilter>& GetParameterFilters() const { return m_parameterFilters; }
    inline bool ParameterFiltersHasBeenSet() const { return m_parameterFiltersHasBeenSet; }
    template<typename ParameterFiltersT = Aws::Vector<ParameterStringFilter>>
    void SetParameterFilters(ParameterFiltersT&& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters = std::forward<ParameterFiltersT>(value); }
    template<typename ParameterFiltersT = Aws::Vector<ParameterStringFilter>>
    GetParametersByPathRequest& WithParameterFilters(ParameterFiltersT&& value) { SetParameterFilters(std::forward<ParameterFiltersT>(value)); return *this;}
    template<typename ParameterFiltersT = ParameterStringFilter>
    GetParametersByPathRequest& AddParameterFilters(ParameterFiltersT&& value) { m_parameterFiltersHasBeenSet = true; m_parameterFilters.emplace_back(std::forward<ParameterFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieve all parameters in a hierarchy with their value decrypted.</p>
     */
    inline bool GetWithDecryption() const { return m_withDecryption; }
    inline bool WithDecryptionHasBeenSet() const { return m_withDecryptionHasBeenSet; }
    inline void SetWithDecryption(bool value) { m_withDecryptionHasBeenSet = true; m_withDecryption = value; }
    inline GetParametersByPathRequest& WithWithDecryption(bool value) { SetWithDecryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetParametersByPathRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetParametersByPathRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    bool m_recursive{false};
    bool m_recursiveHasBeenSet = false;

    Aws::Vector<ParameterStringFilter> m_parameterFilters;
    bool m_parameterFiltersHasBeenSet = false;

    bool m_withDecryption{false};
    bool m_withDecryptionHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
