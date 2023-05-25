/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchComplianceData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class DescribeInstancePatchesResult
  {
  public:
    AWS_SSM_API DescribeInstancePatchesResult();
    AWS_SSM_API DescribeInstancePatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstancePatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline const Aws::Vector<PatchComplianceData>& GetPatches() const{ return m_patches; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline void SetPatches(const Aws::Vector<PatchComplianceData>& value) { m_patches = value; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline void SetPatches(Aws::Vector<PatchComplianceData>&& value) { m_patches = std::move(value); }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline DescribeInstancePatchesResult& WithPatches(const Aws::Vector<PatchComplianceData>& value) { SetPatches(value); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline DescribeInstancePatchesResult& WithPatches(Aws::Vector<PatchComplianceData>&& value) { SetPatches(std::move(value)); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline DescribeInstancePatchesResult& AddPatches(const PatchComplianceData& value) { m_patches.push_back(value); return *this; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <ul> <li> <p>Title
     * (string)</p> </li> <li> <p>KBId (string)</p> </li> <li> <p>Classification
     * (string)</p> </li> <li> <p>Severity (string)</p> </li> <li> <p>State (string,
     * such as "INSTALLED" or "FAILED")</p> </li> <li> <p>InstalledTime (DateTime)</p>
     * </li> <li> <p>InstalledBy (string)</p> </li> </ul>
     */
    inline DescribeInstancePatchesResult& AddPatches(PatchComplianceData&& value) { m_patches.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstancePatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstancePatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeInstancePatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeInstancePatchesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeInstancePatchesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeInstancePatchesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PatchComplianceData> m_patches;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
