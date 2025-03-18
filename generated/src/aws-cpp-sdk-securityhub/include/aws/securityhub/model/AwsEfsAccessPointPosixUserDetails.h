/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides details for all file system operations using this Amazon EFS access
   * point. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEfsAccessPointPosixUserDetails">AWS
   * API Reference</a></p>
   */
  class AwsEfsAccessPointPosixUserDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEfsAccessPointPosixUserDetails() = default;
    AWS_SECURITYHUB_API AwsEfsAccessPointPosixUserDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointPosixUserDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The POSIX group ID used for all file system operations using this access
     * point. </p>
     */
    inline const Aws::String& GetGid() const { return m_gid; }
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }
    template<typename GidT = Aws::String>
    void SetGid(GidT&& value) { m_gidHasBeenSet = true; m_gid = std::forward<GidT>(value); }
    template<typename GidT = Aws::String>
    AwsEfsAccessPointPosixUserDetails& WithGid(GidT&& value) { SetGid(std::forward<GidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secondary POSIX group IDs used for all file system operations using this
     * access point. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecondaryGids() const { return m_secondaryGids; }
    inline bool SecondaryGidsHasBeenSet() const { return m_secondaryGidsHasBeenSet; }
    template<typename SecondaryGidsT = Aws::Vector<Aws::String>>
    void SetSecondaryGids(SecondaryGidsT&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids = std::forward<SecondaryGidsT>(value); }
    template<typename SecondaryGidsT = Aws::Vector<Aws::String>>
    AwsEfsAccessPointPosixUserDetails& WithSecondaryGids(SecondaryGidsT&& value) { SetSecondaryGids(std::forward<SecondaryGidsT>(value)); return *this;}
    template<typename SecondaryGidsT = Aws::String>
    AwsEfsAccessPointPosixUserDetails& AddSecondaryGids(SecondaryGidsT&& value) { m_secondaryGidsHasBeenSet = true; m_secondaryGids.emplace_back(std::forward<SecondaryGidsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The POSIX user ID used for all file system operations using this access
     * point. </p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    AwsEfsAccessPointPosixUserDetails& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gid;
    bool m_gidHasBeenSet = false;

    Aws::Vector<Aws::String> m_secondaryGids;
    bool m_secondaryGidsHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
