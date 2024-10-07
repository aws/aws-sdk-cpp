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
    AWS_REDSHIFT_API EnableLoggingRequest();

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
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline EnableLoggingRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline EnableLoggingRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline EnableLoggingRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline EnableLoggingRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline EnableLoggingRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline EnableLoggingRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}
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
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }
    inline EnableLoggingRequest& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}
    inline EnableLoggingRequest& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}
    inline EnableLoggingRequest& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log destination type. An enum with possible values of <code>s3</code> and
     * <code>cloudwatch</code>.</p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }
    inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = std::move(value); }
    inline EnableLoggingRequest& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}
    inline EnableLoggingRequest& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of exported log types. Possible values are
     * <code>connectionlog</code>, <code>useractivitylog</code>, and
     * <code>userlog</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogExports() const{ return m_logExports; }
    inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }
    inline void SetLogExports(const Aws::Vector<Aws::String>& value) { m_logExportsHasBeenSet = true; m_logExports = value; }
    inline void SetLogExports(Aws::Vector<Aws::String>&& value) { m_logExportsHasBeenSet = true; m_logExports = std::move(value); }
    inline EnableLoggingRequest& WithLogExports(const Aws::Vector<Aws::String>& value) { SetLogExports(value); return *this;}
    inline EnableLoggingRequest& WithLogExports(Aws::Vector<Aws::String>&& value) { SetLogExports(std::move(value)); return *this;}
    inline EnableLoggingRequest& AddLogExports(const Aws::String& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(value); return *this; }
    inline EnableLoggingRequest& AddLogExports(Aws::String&& value) { m_logExportsHasBeenSet = true; m_logExports.push_back(std::move(value)); return *this; }
    inline EnableLoggingRequest& AddLogExports(const char* value) { m_logExportsHasBeenSet = true; m_logExports.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    LogDestinationType m_logDestinationType;
    bool m_logDestinationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_logExports;
    bool m_logExportsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
