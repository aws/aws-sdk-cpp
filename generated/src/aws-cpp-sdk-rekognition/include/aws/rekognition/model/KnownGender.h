/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/KnownGenderType.h>
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
   * <p>The known gender identity for the celebrity that matches the provided ID. The
   * known gender identity can be Male, Female, Nonbinary, or Unlisted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/KnownGender">AWS
   * API Reference</a></p>
   */
  class KnownGender
  {
  public:
    AWS_REKOGNITION_API KnownGender();
    AWS_REKOGNITION_API KnownGender(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API KnownGender& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string value of the KnownGender info about the Celebrity.</p>
     */
    inline const KnownGenderType& GetType() const{ return m_type; }

    /**
     * <p>A string value of the KnownGender info about the Celebrity.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A string value of the KnownGender info about the Celebrity.</p>
     */
    inline void SetType(const KnownGenderType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A string value of the KnownGender info about the Celebrity.</p>
     */
    inline void SetType(KnownGenderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A string value of the KnownGender info about the Celebrity.</p>
     */
    inline KnownGender& WithType(const KnownGenderType& value) { SetType(value); return *this;}

    /**
     * <p>A string value of the KnownGender info about the Celebrity.</p>
     */
    inline KnownGender& WithType(KnownGenderType&& value) { SetType(std::move(value)); return *this;}

  private:

    KnownGenderType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
