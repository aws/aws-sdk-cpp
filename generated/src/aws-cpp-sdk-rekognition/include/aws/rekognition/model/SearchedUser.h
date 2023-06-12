/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
   * <p>Contains metadata about a User searched for within a
   * collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SearchedUser">AWS
   * API Reference</a></p>
   */
  class SearchedUser
  {
  public:
    AWS_REKOGNITION_API SearchedUser();
    AWS_REKOGNITION_API SearchedUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API SearchedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline SearchedUser& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline SearchedUser& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p> A provided ID for the UserID. Unique within the collection. </p>
     */
    inline SearchedUser& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
