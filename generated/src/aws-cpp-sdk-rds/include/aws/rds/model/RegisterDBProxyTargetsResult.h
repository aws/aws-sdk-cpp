/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBProxyTarget.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class RegisterDBProxyTargetsResult
  {
  public:
    AWS_RDS_API RegisterDBProxyTargetsResult();
    AWS_RDS_API RegisterDBProxyTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API RegisterDBProxyTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline const Aws::Vector<DBProxyTarget>& GetDBProxyTargets() const{ return m_dBProxyTargets; }

    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline void SetDBProxyTargets(const Aws::Vector<DBProxyTarget>& value) { m_dBProxyTargets = value; }

    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline void SetDBProxyTargets(Aws::Vector<DBProxyTarget>&& value) { m_dBProxyTargets = std::move(value); }

    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline RegisterDBProxyTargetsResult& WithDBProxyTargets(const Aws::Vector<DBProxyTarget>& value) { SetDBProxyTargets(value); return *this;}

    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline RegisterDBProxyTargetsResult& WithDBProxyTargets(Aws::Vector<DBProxyTarget>&& value) { SetDBProxyTargets(std::move(value)); return *this;}

    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline RegisterDBProxyTargetsResult& AddDBProxyTargets(const DBProxyTarget& value) { m_dBProxyTargets.push_back(value); return *this; }

    /**
     * <p>One or more <code>DBProxyTarget</code> objects that are created when you
     * register targets with a target group.</p>
     */
    inline RegisterDBProxyTargetsResult& AddDBProxyTargets(DBProxyTarget&& value) { m_dBProxyTargets.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RegisterDBProxyTargetsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RegisterDBProxyTargetsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DBProxyTarget> m_dBProxyTargets;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
