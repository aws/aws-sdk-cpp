﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AuthorizeDataShareRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API AuthorizeDataShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeDataShare"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the datashare namespace that producers are
     * to authorize sharing for.</p>
     */
    inline const Aws::String& GetDataShareArn() const{ return m_dataShareArn; }
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = value; }
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::move(value); }
    inline void SetDataShareArn(const char* value) { m_dataShareArnHasBeenSet = true; m_dataShareArn.assign(value); }
    inline AuthorizeDataShareRequest& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}
    inline AuthorizeDataShareRequest& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}
    inline AuthorizeDataShareRequest& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID or a keyword,
     * such as ADX.</p>
     */
    inline const Aws::String& GetConsumerIdentifier() const{ return m_consumerIdentifier; }
    inline bool ConsumerIdentifierHasBeenSet() const { return m_consumerIdentifierHasBeenSet; }
    inline void SetConsumerIdentifier(const Aws::String& value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier = value; }
    inline void SetConsumerIdentifier(Aws::String&& value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier = std::move(value); }
    inline void SetConsumerIdentifier(const char* value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier.assign(value); }
    inline AuthorizeDataShareRequest& WithConsumerIdentifier(const Aws::String& value) { SetConsumerIdentifier(value); return *this;}
    inline AuthorizeDataShareRequest& WithConsumerIdentifier(Aws::String&& value) { SetConsumerIdentifier(std::move(value)); return *this;}
    inline AuthorizeDataShareRequest& WithConsumerIdentifier(const char* value) { SetConsumerIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, allows write operations for a datashare.</p>
     */
    inline bool GetAllowWrites() const{ return m_allowWrites; }
    inline bool AllowWritesHasBeenSet() const { return m_allowWritesHasBeenSet; }
    inline void SetAllowWrites(bool value) { m_allowWritesHasBeenSet = true; m_allowWrites = value; }
    inline AuthorizeDataShareRequest& WithAllowWrites(bool value) { SetAllowWrites(value); return *this;}
    ///@}
  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet = false;

    Aws::String m_consumerIdentifier;
    bool m_consumerIdentifierHasBeenSet = false;

    bool m_allowWrites;
    bool m_allowWritesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
