/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details about the POSIX identity that is used for file system
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CustomPosixUserConfig">AWS
   * API Reference</a></p>
   */
  class CustomPosixUserConfig
  {
  public:
    AWS_SAGEMAKER_API CustomPosixUserConfig();
    AWS_SAGEMAKER_API CustomPosixUserConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomPosixUserConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The POSIX user ID.</p>
     */
    inline long long GetUid() const{ return m_uid; }

    /**
     * <p>The POSIX user ID.</p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>The POSIX user ID.</p>
     */
    inline void SetUid(long long value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>The POSIX user ID.</p>
     */
    inline CustomPosixUserConfig& WithUid(long long value) { SetUid(value); return *this;}


    /**
     * <p>The POSIX group ID.</p>
     */
    inline long long GetGid() const{ return m_gid; }

    /**
     * <p>The POSIX group ID.</p>
     */
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }

    /**
     * <p>The POSIX group ID.</p>
     */
    inline void SetGid(long long value) { m_gidHasBeenSet = true; m_gid = value; }

    /**
     * <p>The POSIX group ID.</p>
     */
    inline CustomPosixUserConfig& WithGid(long long value) { SetGid(value); return *this;}

  private:

    long long m_uid;
    bool m_uidHasBeenSet = false;

    long long m_gid;
    bool m_gidHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
