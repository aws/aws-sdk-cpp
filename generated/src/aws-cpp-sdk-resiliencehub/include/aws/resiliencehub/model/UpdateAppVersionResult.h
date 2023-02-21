/**
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
  class UpdateAppVersionResult
  {
  public:
    AWS_RESILIENCEHUB_API UpdateAppVersionResult();
    AWS_RESILIENCEHUB_API UpdateAppVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API UpdateAppVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline void SetAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_additionalInfo = value; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline void SetAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_additionalInfo = std::move(value); }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& WithAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& WithAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& AddAdditionalInfo(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_additionalInfo.emplace(key, value); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& AddAdditionalInfo(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_additionalInfo.emplace(std::move(key), value); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& AddAdditionalInfo(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& AddAdditionalInfo(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_additionalInfo.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& AddAdditionalInfo(const char* key, Aws::Vector<Aws::String>&& value) { m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Additional configuration parameters for an AWS Resilience Hub
     * application.</p>  <p>Currently, this parameter supports only failover
     * region and account.</p> 
     */
    inline UpdateAppVersionResult& AddAdditionalInfo(const char* key, const Aws::Vector<Aws::String>& value) { m_additionalInfo.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline UpdateAppVersionResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline UpdateAppVersionResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline UpdateAppVersionResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline UpdateAppVersionResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline UpdateAppVersionResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline UpdateAppVersionResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_additionalInfo;

    Aws::String m_appArn;

    Aws::String m_appVersion;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
