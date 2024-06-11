﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DescribeAppVersionResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppVersionResult();
    AWS_RESILIENCEHUB_API DescribeAppVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeAppVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Additional configuration parameters for an Resilience Hub application. If you
     * want to implement <code>additionalInfo</code> through the Resilience Hub console
     * rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter supports only failover region and account.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAdditionalInfo() const{ return m_additionalInfo; }
    inline void SetAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_additionalInfo = value; }
    inline void SetAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_additionalInfo = std::move(value); }
    inline DescribeAppVersionResult& WithAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAdditionalInfo(value); return *this;}
    inline DescribeAppVersionResult& WithAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    inline DescribeAppVersionResult& AddAdditionalInfo(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_additionalInfo.emplace(key, value); return *this; }
    inline DescribeAppVersionResult& AddAdditionalInfo(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_additionalInfo.emplace(std::move(key), value); return *this; }
    inline DescribeAppVersionResult& AddAdditionalInfo(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_additionalInfo.emplace(key, std::move(value)); return *this; }
    inline DescribeAppVersionResult& AddAdditionalInfo(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_additionalInfo.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAppVersionResult& AddAdditionalInfo(const char* key, Aws::Vector<Aws::String>&& value) { m_additionalInfo.emplace(key, std::move(value)); return *this; }
    inline DescribeAppVersionResult& AddAdditionalInfo(const char* key, const Aws::Vector<Aws::String>& value) { m_additionalInfo.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }
    inline DescribeAppVersionResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline DescribeAppVersionResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline DescribeAppVersionResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resilience Hub application version.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }
    inline DescribeAppVersionResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline DescribeAppVersionResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline DescribeAppVersionResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAppVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAppVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAppVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_additionalInfo;

    Aws::String m_appArn;

    Aws::String m_appVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
