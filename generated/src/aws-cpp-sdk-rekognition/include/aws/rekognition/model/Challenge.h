/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ChallengeType.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Describes the type and version of the challenge being used for the Face
   * Liveness session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Challenge">AWS
   * API Reference</a></p>
   */
  class Challenge
  {
  public:
    AWS_REKOGNITION_API Challenge() = default;
    AWS_REKOGNITION_API Challenge(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Challenge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the challenge being used for the Face Liveness session.</p>
     */
    inline ChallengeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChallengeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Challenge& WithType(ChallengeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the challenge being used for the Face Liveness session.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Challenge& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    ChallengeType m_type{ChallengeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
