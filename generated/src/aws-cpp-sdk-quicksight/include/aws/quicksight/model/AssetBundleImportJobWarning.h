/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Describes a warning that occurred during an Asset Bundle import
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobWarning">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobWarning
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobWarning();
    AWS_QUICKSIGHT_API AssetBundleImportJobWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline AssetBundleImportJobWarning& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline AssetBundleImportJobWarning& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that the warning occurred for.</p>
     */
    inline AssetBundleImportJobWarning& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline AssetBundleImportJobWarning& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline AssetBundleImportJobWarning& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the warning that occurred during an Asset Bundle import
     * job.</p>
     */
    inline AssetBundleImportJobWarning& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
