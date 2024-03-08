/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> An object that contains an optional comment about your Amazon Route 53
   * hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRoute53HostedZoneConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsRoute53HostedZoneConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRoute53HostedZoneConfigDetails();
    AWS_SECURITYHUB_API AwsRoute53HostedZoneConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRoute53HostedZoneConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline AwsRoute53HostedZoneConfigDetails& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline AwsRoute53HostedZoneConfigDetails& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p> Any comments that you include about the hosted zone. </p>
     */
    inline AwsRoute53HostedZoneConfigDetails& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
