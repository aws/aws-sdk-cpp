/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/LogDestinationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EnableLoggingMessage">AWS
   * API Reference</a></p>
   */
  class EnableLoggingRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API EnableLoggingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableLogging"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    EnableLoggingRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    EnableLoggingRequest& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix applied to the log file names.</p> <p>Valid characters are any
     * letter from any language, any whitespace character, any numeric character, and
     * the following characters: underscore (<code>_</code>), period (<code>.</code>),
     * colon (<code>:</code>), slash (<code>/</code>), equal (<code>=</code>), plus
     * (<code>+</code>), backslash (<code>\</code>), hyphen (<code>-</code>), at symbol
     * (<code>@</code>).</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    template<typename S3KeyPrefixT = Aws::String>
    void SetS3KeyPrefix(S3KeyPrefixT&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value); }
    template<typename S3KeyPrefixT = Aws::String>
    EnableLoggingRequest& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log destination type. An enum with possible values of <code>s3</code> and
     * <code>cloudwatch</code>.</p>
     */
    inline LogDestinationType GetLogDestinationType() const { return m_logDestinationType; }
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }
    inline void SetLogDestinationType(LogDestinationType value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }
    inline EnableLoggingRequest& WithLogDestinationType(LogDestinationType value) { SetLogDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of exported log types. Possible values are
     * <code>connectionlog</code>, <code>useractivitylog</code>, and
     * <code>userlog</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogExports() const { return m_logExports; }
    inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }
    template<typename LogExportsT = Aws::Vector<Aws::String>>
    void SetLogExports(LogExportsT&& value) { m_logExportsHasBeenSet = true; m_logExports = std::forward<LogExportsT>(value); }
    template<typename LogExportsT = Aws::Vector<Aws::String>>
    EnableLoggingRequest& WithLogExports(LogExportsT&& value) { SetLogExports(std::forward<LogExportsT>(value)); return *this;}
    template<typename LogExportsT = Aws::String>
    EnableLoggingRequest& AddLogExports(LogExportsT&& value) { m_logExportsHasBeenSet = true; m_logExports.emplace_back(std::forward<LogExportsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    LogDestinationType m_logDestinationType{LogDestinationType::NOT_SET};
    bool m_logDestinationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_logExports;
    bool m_logExportsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
