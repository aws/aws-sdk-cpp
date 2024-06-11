﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DescribeSchemaRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSchema"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema to retrieve.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }
    inline DescribeSchemaRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline DescribeSchemaRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline DescribeSchemaRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
