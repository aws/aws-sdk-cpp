/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceImportStatusType.h>
#include <aws/resiliencehub/model/TerraformSource.h>
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
  class ImportResourcesToDraftAppVersionResult
  {
  public:
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionResult();
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceArns() const{ return m_sourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline void SetSourceArns(const Aws::Vector<Aws::String>& value) { m_sourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline void SetSourceArns(Aws::Vector<Aws::String>&& value) { m_sourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithSourceArns(const Aws::Vector<Aws::String>& value) { SetSourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithSourceArns(Aws::Vector<Aws::String>&& value) { SetSourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& AddSourceArns(const Aws::String& value) { m_sourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& AddSourceArns(Aws::String&& value) { m_sourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources that you imported.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& AddSourceArns(const char* value) { m_sourceArns.push_back(value); return *this; }


    /**
     * <p>The status of the action.</p>
     */
    inline const ResourceImportStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const ResourceImportStatusType& value) { m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(ResourceImportStatusType&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithStatus(const ResourceImportStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithStatus(ResourceImportStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline const Aws::Vector<TerraformSource>& GetTerraformSources() const{ return m_terraformSources; }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline void SetTerraformSources(const Aws::Vector<TerraformSource>& value) { m_terraformSources = value; }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline void SetTerraformSources(Aws::Vector<TerraformSource>&& value) { m_terraformSources = std::move(value); }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithTerraformSources(const Aws::Vector<TerraformSource>& value) { SetTerraformSources(value); return *this;}

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionResult& WithTerraformSources(Aws::Vector<TerraformSource>&& value) { SetTerraformSources(std::move(value)); return *this;}

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionResult& AddTerraformSources(const TerraformSource& value) { m_terraformSources.push_back(value); return *this; }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionResult& AddTerraformSources(TerraformSource&& value) { m_terraformSources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appArn;

    Aws::String m_appVersion;

    Aws::Vector<Aws::String> m_sourceArns;

    ResourceImportStatusType m_status;

    Aws::Vector<TerraformSource> m_terraformSources;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
