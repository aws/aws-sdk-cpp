/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Pair of multicast url and source ip address (optional) that make up a multicast
   * source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MulticastSourceCreateRequest">AWS
   * API Reference</a></p>
   */
  class MulticastSourceCreateRequest
  {
  public:
    AWS_MEDIALIVE_API MulticastSourceCreateRequest();
    AWS_MEDIALIVE_API MulticastSourceCreateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MulticastSourceCreateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This represents the ip address of the device sending the multicast stream.
     */
    inline const Aws::String& GetSourceIp() const{ return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    inline void SetSourceIp(const Aws::String& value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }
    inline void SetSourceIp(Aws::String&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::move(value); }
    inline void SetSourceIp(const char* value) { m_sourceIpHasBeenSet = true; m_sourceIp.assign(value); }
    inline MulticastSourceCreateRequest& WithSourceIp(const Aws::String& value) { SetSourceIp(value); return *this;}
    inline MulticastSourceCreateRequest& WithSourceIp(Aws::String&& value) { SetSourceIp(std::move(value)); return *this;}
    inline MulticastSourceCreateRequest& WithSourceIp(const char* value) { SetSourceIp(value); return *this;}
    ///@}

    ///@{
    /**
     * This represents the customer's source URL where multicast stream is pulled from.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline MulticastSourceCreateRequest& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline MulticastSourceCreateRequest& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline MulticastSourceCreateRequest& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
