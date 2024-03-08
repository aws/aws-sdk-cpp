/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/BundleResourceAssociation.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeBundleAssociationsResult
  {
  public:
    AWS_WORKSPACES_API DescribeBundleAssociationsResult();
    AWS_WORKSPACES_API DescribeBundleAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeBundleAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of information about the specified associations.</p>
     */
    inline const Aws::Vector<BundleResourceAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>List of information about the specified associations.</p>
     */
    inline void SetAssociations(const Aws::Vector<BundleResourceAssociation>& value) { m_associations = value; }

    /**
     * <p>List of information about the specified associations.</p>
     */
    inline void SetAssociations(Aws::Vector<BundleResourceAssociation>&& value) { m_associations = std::move(value); }

    /**
     * <p>List of information about the specified associations.</p>
     */
    inline DescribeBundleAssociationsResult& WithAssociations(const Aws::Vector<BundleResourceAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>List of information about the specified associations.</p>
     */
    inline DescribeBundleAssociationsResult& WithAssociations(Aws::Vector<BundleResourceAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>List of information about the specified associations.</p>
     */
    inline DescribeBundleAssociationsResult& AddAssociations(const BundleResourceAssociation& value) { m_associations.push_back(value); return *this; }

    /**
     * <p>List of information about the specified associations.</p>
     */
    inline DescribeBundleAssociationsResult& AddAssociations(BundleResourceAssociation&& value) { m_associations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBundleAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBundleAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBundleAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BundleResourceAssociation> m_associations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
