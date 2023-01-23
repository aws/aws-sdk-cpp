/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>A structure that contains resource policy ID and Amazon Resource Name
   * (ARN).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ResourcePolicySummary">AWS
   * API Reference</a></p>
   */
  class ResourcePolicySummary
  {
  public:
    AWS_ORGANIZATIONS_API ResourcePolicySummary();
    AWS_ORGANIZATIONS_API ResourcePolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API ResourcePolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline ResourcePolicySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline ResourcePolicySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the resource policy.</p>
     */
    inline ResourcePolicySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline ResourcePolicySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline ResourcePolicySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource policy.</p>
     */
    inline ResourcePolicySummary& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
